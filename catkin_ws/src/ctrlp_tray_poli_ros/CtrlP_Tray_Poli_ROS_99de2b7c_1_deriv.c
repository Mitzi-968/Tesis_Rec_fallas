/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "CtrlP_Tray_Poli_ROS_99de2b7c_1_geometries.h"

PmfMessageId CtrlP_Tray_Poli_ROS_99de2b7c_1_deriv(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *deriv, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  int ii[1];
  double xx[32];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 3.0;
  xx[1] = 0.0;
  xx[2] = state[0] + xx[0];
  if (xx[1] < xx[2])
    xx[2] = xx[1];
  xx[3] = 1.74532925199433e-3;
  xx[4] = 1.0;
  xx[5] = - (xx[2] / xx[3]);
  if (xx[4] < xx[5])
    xx[5] = xx[4];
  xx[6] = 2.0;
  xx[7] = 572.9577951308232;
  xx[8] = xx[7] * state[1];
  xx[9] = 5.729577951308233e5;
  xx[10] = xx[5] * xx[5] * (xx[0] - xx[6] * xx[5]) * ((- xx[2] == xx[1] ? xx[1] :
    - xx[8]) - xx[9] * xx[2]);
  if (xx[1] > xx[10])
    xx[10] = xx[1];
  xx[2] = state[0] - xx[0];
  if (xx[1] > xx[2])
    xx[2] = xx[1];
  xx[5] = xx[2] / xx[3];
  if (xx[4] < xx[5])
    xx[5] = xx[4];
  xx[11] = xx[5] * xx[5] * (xx[0] - xx[6] * xx[5]) * (xx[9] * xx[2] + (xx[2] ==
    xx[1] ? xx[1] : xx[8]));
  if (xx[1] > xx[11])
    xx[11] = xx[1];
  xx[2] = 0.5;
  xx[5] = state[2] + xx[0];
  if (xx[1] < xx[5])
    xx[5] = xx[1];
  xx[8] = - (xx[5] / xx[3]);
  if (xx[4] < xx[8])
    xx[8] = xx[4];
  xx[12] = xx[7] * state[3];
  xx[7] = xx[8] * xx[8] * (xx[0] - xx[6] * xx[8]) * ((- xx[5] == xx[1] ? xx[1] :
    - xx[12]) - xx[9] * xx[5]);
  if (xx[1] > xx[7])
    xx[7] = xx[1];
  xx[5] = state[2] - xx[0];
  if (xx[1] > xx[5])
    xx[5] = xx[1];
  xx[8] = xx[5] / xx[3];
  if (xx[4] < xx[8])
    xx[8] = xx[4];
  xx[3] = xx[8] * xx[8] * (xx[0] - xx[6] * xx[8]) * (xx[9] * xx[5] + (xx[5] ==
    xx[1] ? xx[1] : xx[12]));
  if (xx[1] > xx[3])
    xx[3] = xx[1];
  xx[5] = 0.5000000000000001;
  xx[8] = xx[2] * state[2];
  xx[9] = sin(xx[8]);
  xx[12] = xx[2] * xx[9];
  xx[13] = cos(xx[8]);
  xx[8] = xx[6] * xx[12] * xx[13];
  xx[14] = xx[8] * state[1] * state[1];
  xx[15] = xx[6] * xx[12] * xx[9] - xx[4];
  xx[12] = state[1] * xx[15] * state[1];
  xx[16] = xx[12] * xx[9];
  xx[17] = xx[14] * xx[9];
  xx[18] = xx[2] * (xx[14] + xx[6] * (xx[16] * xx[13] - xx[17] * xx[9]));
  xx[14] = 0.625;
  ii[0] = factorSymmetricPosDef(xx + 14, 1, xx + 19);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'CtrlP_Tray_Poli_ROS/Dinamica/joint_B' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[19] = (input[1] - xx[0] * state[3] + xx[7] - xx[3] + xx[5] * xx[18]) / xx
    [14];
  xx[3] = 0.2500000000000001;
  xx[7] = xx[18] - xx[3] * xx[19];
  xx[18] = xx[2] * (xx[6] * (xx[17] * xx[13] + xx[16] * xx[9]) - xx[12] + xx[5] *
                    state[3] * (state[1] + state[1] + state[3]));
  xx[12] = xx[18] * xx[9];
  xx[16] = xx[7] * xx[9];
  xx[17] = xx[7] + xx[6] * (xx[12] * xx[13] - xx[16] * xx[9]);
  xx[7] = xx[5] * state[1] * state[1];
  xx[20] = xx[6] * xx[13] * xx[9];
  xx[21] = xx[3] / xx[14];
  xx[22] = xx[2] - xx[3] * xx[21];
  xx[3] = xx[20] * xx[22];
  xx[23] = xx[13] * xx[13];
  xx[24] = xx[6] * xx[23] - xx[4];
  xx[25] = xx[2] * xx[24];
  xx[26] = xx[2] * xx[20];
  xx[27] = xx[22] * xx[24];
  xx[22] = xx[26] * xx[24] - xx[20] * xx[27];
  xx[28] = xx[8] * (xx[20] * xx[3] + xx[25] * xx[24]) + xx[22] * xx[15];
  xx[29] = xx[2] * xx[21];
  xx[30] = xx[6] * (xx[23] + xx[9] * xx[9]) - xx[4];
  xx[4] = xx[29] * xx[20] * xx[30];
  xx[23] = xx[28] - xx[4];
  xx[31] = xx[25] * xx[20] - xx[3] * xx[24];
  xx[3] = xx[2] / xx[14];
  xx[14] = xx[29] * xx[24] * xx[30];
  xx[25] = xx[8] * xx[4] - xx[14] * xx[15];
  xx[4] = xx[27] * xx[24] + xx[26] * xx[20];
  xx[20] = xx[8] * xx[31] + xx[15] * xx[4];
  xx[24] = xx[20] + xx[14];
  xx[14] = xx[24] - xx[5] * (xx[2] + xx[4]);
  xx[4] = (xx[2] - xx[2] * xx[3]) * xx[30] * xx[30] - xx[25] - xx[25] + xx[15] *
    xx[20] + xx[8] * xx[28] - xx[5] * xx[24] - xx[5] * xx[14] + xx[2];
  ii[0] = factorSymmetricPosDef(xx + 4, 1, xx + 20);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'CtrlP_Tray_Poli_ROS/Dinamica/joint_A' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[20] = 9.806649999999999;
  xx[24] = xx[2] * state[0];
  xx[25] = sin(xx[24]);
  xx[26] = xx[20] * xx[25];
  xx[27] = xx[20] - xx[6] * xx[26] * xx[25];
  xx[20] = xx[6] * xx[26] * cos(xx[24]);
  xx[24] = (input[0] - xx[0] * state[1] + xx[10] - xx[11] - (xx[2] * xx[19] +
             xx[15] * xx[17] + xx[8] * (xx[18] - xx[6] * (xx[16] * xx[13] + xx
    [12] * xx[9])) + xx[7] * xx[23] - xx[5] * (xx[17] + xx[7] * xx[31]))) / xx[4]
    - (xx[27] * (xx[23] - xx[5] * xx[22]) / xx[4] - xx[20] * xx[14] / xx[4]);
  xx[0] = xx[24] * xx[15] - (xx[5] * xx[24] + xx[20]);
  deriv[0] = state[1];
  deriv[1] = xx[24];
  deriv[2] = state[3];
  deriv[3] = xx[19] - (xx[24] * xx[3] - (xx[0] - xx[6] * ((xx[27] + xx[7] + xx[8]
    * xx[24]) * xx[9] * xx[13] + xx[0] * xx[9] * xx[9])) * xx[21]);
  errorResult[0] = xx[1];
  return NULL;
}
