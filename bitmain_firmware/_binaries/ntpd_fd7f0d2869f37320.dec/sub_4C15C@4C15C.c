int __fastcall sub_4C15C(int a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // r1
  int v6; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r2
  const char *v20; // r1
  char v21[80]; // [sp+34h] [bp-54h] BYREF
  int v22; // [sp+84h] [bp-4h]

  v5 = a3[6];
  v6 = a3[8];
  v8 = _stack_chk_guard;
  v9 = v5;
  a2[47] = v5;
  v10 = a3[7];
  v22 = v8;
  v11 = sub_6FBFC(v9, v10, v6);
  v12 = a3[9];
  v13 = (_DWORD)&unk_F4240 * a3[12];
  v14 = a3[11];
  a2[50] = a3[10];
  if ( v12 - 9 >= 0 )
    a2[49] = v12 - 9;
  a2[51] = v14;
  a2[52] = v13;
  a2[48] = v11;
  if ( v12 - 9 < 0 )
  {
    v17 = v11 - 1;
    a2[48] = v17;
    a2[49] = v12 + 15;
    if ( v17 <= 0 )
    {
      v18 = a2[47] - 1;
      a2[47] = v18;
      a2[48] = sub_6FBFC(v18, 12, 31);
    }
  }
  if ( !sub_3A4E8(a2) )
    return sub_39C88(a1, 6);
  v15 = a2[59];
  a2[56] = a2[58];
  a2[57] = v15;
  sub_3A534(a1);
  sub_6D00C(
    v21,
    80,
    "%04d/%02d/%02d %02d:%02d:%02d.%03d JST   ( %04d/%03d %02d:%02d:%02d.%03d UTC )",
    a3[6],
    a3[7],
    a3[8],
    a3[9],
    a3[10],
    a3[11],
    a3[12],
    a2[47],
    a2[48],
    a2[49],
    a2[50],
    a2[51],
    a2[52] / 1000000);
  sub_4B63C(a1, 5, v21);
  switch ( *(_BYTE *)(a1 + 296) )
  {
    case 0:
      v19 = 32;
      v20 = "Reject";
      break;
    case 1:
      v19 = 120;
      v20 = "FalseTick";
      break;
    case 2:
      v19 = 46;
      v20 = "Excess";
      break;
    case 3:
      v19 = 45;
      v20 = "Outlier";
      break;
    case 4:
      v19 = 43;
      v20 = "Candidate";
      break;
    case 5:
      v19 = 35;
      v20 = "Selected";
      break;
    case 6:
      v19 = 42;
      v20 = "Sys.Peer";
      break;
    case 7:
      v19 = 111;
      v20 = "PPS.Peer";
      break;
    default:
      v19 = 32;
      v20 = byte_99528;
      break;
  }
  sub_6D00C(
    v21,
    80,
    "status %d [%c] %s : offset %3.3f mSec. : jitter %3.3f mSec.",
    *(unsigned __int8 *)(a1 + 296),
    v19,
    v20,
    *(double *)(a1 + 608) * 1000.0,
    *(double *)(a1 + 624) * 1000.0);
  return sub_4B63C(a1, 4, v21);
}
