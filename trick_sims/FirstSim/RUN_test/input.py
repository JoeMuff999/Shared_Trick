trick.stop(162)
drg = trick.DRAscii("rocket") ;
drg.add_variable("dyn.rocket.pos[0]", "x_pos")
drg.add_variable("dyn.rocket.pos[1]", "y_pos")
drg.add_variable("dyn.rocket.angle", "angle")
drg.set_cycle(0.1)

trick.add_data_record_group(drg, trick.DR_Buffer)
execfile("Modified_data/realtime.py")
