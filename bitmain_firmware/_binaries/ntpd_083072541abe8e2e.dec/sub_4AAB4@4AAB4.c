__int16 *__fastcall sub_4AAB4(int a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r1
  int v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r12
  int v12; // r3
  int v13; // r1
  int v14; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r2
  const char *v19; // r12
  char v20[80]; // [sp+34h] [bp-54h] BYREF

  v4 = a3[6];
  v7 = a3[8];
  a2[47] = v4;
  v8 = sub_6EC68(v4, a3[7], v7);
  v9 = a3[12];
  v10 = a3[9];
  v11 = a3[10];
  a2[48] = v8;
  v12 = (_DWORD)&unk_F4240 * v9;
  v13 = a3[11];
  a2[50] = v11;
  if ( v10 - 9 >= 0 )
    a2[49] = v10 - 9;
  a2[51] = v13;
  a2[52] = v12;
  if ( v10 - 9 < 0 )
  {
    v16 = v8 - 1;
    a2[48] = v16;
    a2[49] = v10 + 15;
    if ( v16 <= 0 )
    {
      v17 = a2[47] - 1;
      a2[47] = v17;
      a2[48] = sub_6EC68(v17, 12, 31);
    }
  }
  if ( !sub_39CF8(a2) )
    return sub_394A0((__int16 *)a1, 6);
  v14 = a2[59];
  a2[56] = a2[58];
  a2[57] = v14;
  sub_39D44(a1);
  sub_6C054(
    v20,
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
  sub_4A084(a1, 5, v20);
  switch ( *(_BYTE *)(a1 + 296) )
  {
    case 0:
      v18 = 32;
      v19 = "Reject";
      break;
    case 1:
      v18 = 120;
      v19 = "FalseTick";
      break;
    case 2:
      v18 = 46;
      v19 = "Excess";
      break;
    case 3:
      v18 = 45;
      v19 = "Outlier";
      break;
    case 4:
      v18 = 43;
      v19 = "Candidate";
      break;
    case 5:
      v18 = 35;
      v19 = "Selected";
      break;
    case 6:
      v18 = 42;
      v19 = "Sys.Peer";
      break;
    case 7:
      v18 = 111;
      v19 = "PPS.Peer";
      break;
    default:
      v18 = 32;
      v19 = byte_97F7C;
      break;
  }
  sub_6C054(
    v20,
    80,
    "status %d [%c] %s : offset %3.3f mSec. : jitter %3.3f mSec.",
    *(unsigned __int8 *)(a1 + 296),
    v18,
    v19,
    *(double *)(a1 + 608) * 1000.0,
    *(double *)(a1 + 624) * 1000.0);
  return (__int16 *)sub_4A084(a1, 4, v20);
}
