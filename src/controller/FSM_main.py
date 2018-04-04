

import sys
import os
import signal
import pandas as pd
sys.path.append(os.path.abspath(("/Users/GYUNAM/Documents/")))
from PyProM.src.data.Eventlog import Eventlog
from PyProM.src.data.xes_reader import XesReader

#sys.path.append(os.path.abspath("../preprocessing"))
from PyProM.src.preprocessing.preprocess import Remover
from PyProM.src.preprocessing.preprocess import Transformer
from PyProM.src.preprocessing.preprocess import Filtering

#sys.path.append(os.path.abspath("../analysis"))
from PyProM.src.analysis.classifier import Classifier
from PyProM.src.analysis.stat_analysis import StatAnalyzer
from PyProM.src.analysis.simplification import Simplification

#sys.path.append(os.path.abspath("../mining"))
from PyProM.src.mining.transition_matrix import TransitionMatrix
from PyProM.src.mining.dependency_graph import DependencyGraph
from PyProM.src.mining.heuristic_miner import HeuristicMiner

#sys.path.append(os.path.abspath(("../model")))
from PyProM.src.model.fsm import FSM_Miner

#sys.path.append(os.path.abspath(("../visualization")))
from PyProM.src.visualization.svg_widget import Visualization
from PyProM.src.visualization.chart_visualization import ChartVisualizer

from PyQt5 import QtSvg,QtCore,QtGui,Qt,QtWidgets

import multiprocessing



if __name__ == '__main__':
	#eventlog
	eventlog = Eventlog.from_txt('/Users/GYUNAM/Documents/example/repairExample.txt')
	eventlog = eventlog.assign_caseid('Case ID')
	eventlog = eventlog.assign_activity('Activity')
	eventlog = eventlog.assign_resource('Resource')
	eventlog = eventlog.assign_timestamp('Complete Timestamp')
	eventlog = eventlog.clear_columns()

	#preprocessing
	filtering = Filtering()
	remover = Remover()
	eventlog = remover.remove_duplicate(eventlog)

	#Transition Matrix
	TM = TransitionMatrix()
	transition_matrix = TM.get_transition_matrix(eventlog, 4, type='sequence', horizon=2)
	transition_matrix = TM.annotate_transition_matrix(eventlog, 4, transition_matrix)

	#FSM model
	fsm = FSM_Miner()
	fsm_graph = fsm._create_graph(transition_matrix)
	fsm.get_graph_info(fsm_graph)
	dot = fsm.get_dot(fsm_graph)
	#Visualizer
	app = QtWidgets.QApplication(sys.argv)

	window = Visualization()
	window.show()

	#for path in app.arguments()[1:]:
	window.load('../result/state_svg.svg');

	sys.exit(app.exec_())