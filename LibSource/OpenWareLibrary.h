#ifndef __OpenWareLibrary_h__
#define __OpenWareLibrary_h__

#include "AbstractSynth.h"
#include "AgnesiOscillator.h"
#include "AudioBuffer.h"
#include "BiquadFilter.h"
#include "ChirpOscillator.h"
#include "CircularBuffer.h"
#include "ComplexFloatArray.h"
#include "ComplexFourierTransform.h"
#include "ComplexShortArray.h"
#include "Control.h"
#include "CrossFadingCircularBuffer.h"
#include "DcBlockingFilter.h"
#include "DelayProcessor.h"
#include "DryWetProcessor.h"
#include "Envelope.h"
#include "ExponentialDecayEnvelope.h"
#include "FastFourierTransform.h"
#include "FeedbackProcessor.h"
#include "FractionalCircularBuffer.h"
#include "FirFilter.h"
#include "FloatArray.h"
#include "FloatMatrix.h"
#include "IntArray.h"
#include "Interpolator.h"
#include "InterpolatingCircularBuffer.h"
#include "AdsrEnvelope.h"
#include "MidiProcessor.h"
#include "MidiPolyphonicExpressionProcessor.h"
#include "MidiStatus.h"
#include "MonophonicProcessor.h"
#include "NoiseGenerator.h"
#include "OpenWareMidiControl.h"
#include "Oscillator.h"
#include "Patch.h"
#include "PatchParameter.h"
#include "PitchDetector.h"
#include "PolyBlepOscillator.h"
#include "PolyphonicProcessor.h"
#include "RampOscillator.h"
#include "Resample.h"
#include "Resource.h"
#include "SampleOscillator.h"
#include "ShortArray.h"
#include "ShortFastFourierTransform.h"
#include "SignalGenerator.h"
#include "SignalProcessor.h"
#include "SineOscillator.h"
#include "SmoothValue.h"
#include "SmoothingFilter.h"
#include "StateVariableFilter.h"
#include "SquareWaveOscillator.h"
#include "Synth.h"
#include "TapTempo.h"
#include "TriangleOscillator.h"
#include "VariableShapeOscillator.h"
#include "VoltsPerOctave.h"
#include "VelocityCurve.h"
#include "VosimOscillator.h"
#include "WavFile.h"
#include "WavetableOscillator.h"
#include "Window.h"

#endif	/* __OpenWareLibrary_h__ */
