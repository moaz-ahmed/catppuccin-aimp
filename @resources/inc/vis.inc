
[measureSamplingRate]
measure=plugin
plugin=audioLevel
type=format
regExpSubstitute=1
substitute="(Hz.*)$":""
updateDivider=-1

[mAudio]
measure=plugin
plugin=audiolevel
port=output
FFTSize=(floor([measureSamplingRate] * #accuracy# / #FPS#))
FFTOverlap=(floor([measureSamplingRate] * (#accuracy# - 1) / #FPS#))
FFTattack=0
FFTdecay=50
<<<<<<< HEAD
bands=14
=======
bands=15
>>>>>>> origin/main
freqmin=20
freqmax=16500
sensitivity=#sensitivity#
disabled=(1-#visDisp#)
dynamicvariables=1

[b1]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=2
=======
bandidx=3
>>>>>>> origin/main
[b2]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=3
=======
bandidx=4
>>>>>>> origin/main
[b3]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=4
=======
bandidx=5
>>>>>>> origin/main
[b4]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=5
=======
bandidx=6
>>>>>>> origin/main
[b5]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=6
=======
bandidx=7
>>>>>>> origin/main
[b6]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=7
=======
bandidx=8
>>>>>>> origin/main
[b7]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=8
=======
bandidx=9
>>>>>>> origin/main
[b8]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=9
=======
bandidx=10
>>>>>>> origin/main
[b9]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=10
=======
bandidx=11
>>>>>>> origin/main
[b10]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=11
=======
bandidx=12
>>>>>>> origin/main
[b11]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=12
=======
bandidx=13
>>>>>>> origin/main
[b12]
measure=plugin
plugin=audiolevel
parent=mAudio
type=band
averagesize=#avgSize#
disabled=(1-#visDisp#)
<<<<<<< HEAD
bandidx=13
=======
bandidx=14
>>>>>>> origin/main

