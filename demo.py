import numpy as np
import matplotlib.pyplot as plt
from scipy import signal

# Time axis
t = np.linspace(0, 1, 1000)

# Signals
sine_wave = np.sin(2 * np.pi * 5 * t)
cosine_wave = np.cos(2 * np.pi * 5 * t)
square_wave = signal.square(2 * np.pi * 5 * t)
sawtooth_wave = signal.sawtooth(2 * np.pi * 5 * t)
unit_step = np.where(t >= 0.5, 1, 0)
impulse = np.zeros_like(t)
impulse[500] = 1

# Plotting
plt.figure(figsize=(10,8))

plt.subplot(3,2,1)
plt.plot(t, sine_wave)
plt.title("Sine Wave")

plt.subplot(3,2,2)
plt.plot(t, cosine_wave)
plt.title("Cosine Wave")

plt.subplot(3,2,3)
plt.plot(t, square_wave)
plt.title("Square Wave")

plt.subplot(3,2,4)
plt.plot(t, sawtooth_wave)
plt.title("Sawtooth Wave")

plt.subplot(3,2,5)
plt.plot(t, unit_step)
plt.title("Unit Step Signal")

plt.subplot(3,2,6)
plt.stem(t, impulse)
plt.title("Unit Impulse Signal")

plt.tight_layout()
plt.show()