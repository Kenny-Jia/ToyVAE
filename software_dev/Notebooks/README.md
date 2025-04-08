# Notebooks for VAE-GAN development

There are several copies of the `SNL_VAE_Trainer_Vsmall` notebook from the main branch for VAE development, which are used to study different hyperparameters in the model over the development period. Here is a list of what they do:

- `SNL_GAN_Trainer_Vsmall_ScaledDisc`: Updated Spring 2025, best-performing model, current issue: has weird turn-on "bump" effect in the anomaly score districution.
- `SNL_GAN_Trainer_Vsmall_best`: Final implementation of the VAE-GAN model as of the end of fall 2024 quarter, with the bug that custom MSE loss used `reduce_sum()` rather than `reduce_mean()`. 
- `SNL_GAN_Trainer_Vsmall_best_mse`: The final implementation of the VAE-GAN model, with the above bug fixed
- `SNL_GAN_Trainer_Vsmall_Adversarial`: Trial implementation of an ALAD structure (using a real generator instead of encoder)
- `monte_carlo_eval`: used to examine my Monte Carlo attempts and compare to the 40MHz dataset (unfinished due to MC issues). The root code to plot the MC data directly is in the `Monte_Carlo` directory, not in `ToyVAE`

Less relevant ones:
- `SNL_VAE_Trainer_Vsmall_gammaVar`: used to search for hyperparam gamma. The many trained models are stored locally at `/fs/ddn/sdf/group/atlas/d/lizhx/ToyVAE/software_dev/trained_models/gamma_tuning`
- `SNL_VAE_Trainer_Vsmall_largeDisc`: used to test varying discriminator size.
- `SNL_VAE_Trainer_Vsmall_testRun`: initial test notebook, all content should be similar to other notebooks
- `SNL_VAE_Trainer_Vsmall`, `SNL_VAE_Trainer_Vlarge`: unmodified original files