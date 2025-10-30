int __fastcall sub_367D8(int a1, int *a2)
{
  double *v2; // r8
  int v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  char v9; // r12
  double v10; // r0
  int v11; // r2
  double v12; // r0
  int v13; // r3
  int v14; // r2
  __int64 v15; // r8
  _QWORD *v16; // r1
  int result; // r0
  int i; // r3
  int v19; // r3
  int v20; // r2
  int v21; // r3
  int v22; // r0
  int v23; // r1
  double v24; // [sp+4h] [bp-10h]

  v2 = (double *)(a1 + 600);
  v24 = *(double *)(a1 + 600);
  sub_33EBC((_DWORD *)a1);
  v5 = *(_DWORD *)(a1 + 176);
  if ( v5 )
    BN_free(v5);
  sub_27F0C((_DWORD *)(a1 + 184));
  sub_27F0C((_DWORD *)(a1 + 208));
  sub_27F0C((_DWORD *)(a1 + 248));
  sub_27F0C((_DWORD *)(a1 + 272));
  v6 = *(void **)(a1 + 232);
  if ( v6 )
    free(v6);
  v7 = *(void **)(a1 + 148);
  if ( v7 )
    free(v7);
  v8 = *(void **)(a1 + 152);
  if ( v8 )
    free(v8);
  memset((void *)(a1 + 128), 0, 0x240u);
  v9 = *(_BYTE *)(a1 + 66);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a1 + 65);
  *(_DWORD *)(a1 + 632) = 0;
  *(_DWORD *)(a1 + 636) = 1076887552;
  *(_BYTE *)(a1 + 94) = v9;
  *(_DWORD *)(a1 + 300) = sub_33534(a1);
  LODWORD(v10) = sys_precision;
  v12 = ldexp(v10, v11);
  v13 = *(unsigned __int8 *)(a1 + 63);
  v14 = a1 + 551;
  if ( v13 == 6 )
    v12 = v24;
  HIDWORD(v15) = 1076887552;
  *(double *)(a1 + 624) = 1.0;
  if ( v13 == 6 )
    *v2 = v12;
  v16 = (_QWORD *)(a1 + 456);
  result = *(_DWORD *)(a1 + 68);
  LODWORD(v15) = 0;
  if ( (result & 0x1000) != 0 )
    *(_DWORD *)(a1 + 316) = 1;
  for ( i = 0; i != 8; ++i )
  {
    *(_BYTE *)++v14 = i;
    *v16++ = v15;
  }
  if ( (result & 8) != 0 )
    v19 = *(_DWORD *)(a1 + 84);
  else
    v19 = 16;
  if ( (result & 8) != 0 )
  {
    v20 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 93) = v19;
    v20 = 3;
    *(_BYTE *)(a1 + 91) = 3;
  }
  if ( (result & 8) != 0 )
  {
    *(_DWORD *)(v19 + 220) = v20;
    *(_DWORD *)(v19 + 216) = v20;
  }
  else
  {
    v19 = *a2;
  }
  if ( (result & 8) == 0 )
    *(_DWORD *)(a1 + 112) = v19;
  v21 = current_time;
  *(_DWORD *)(a1 + 716) = current_time;
  *(_DWORD *)(a1 + 704) = v21;
  *(_DWORD *)(a1 + 720) = v21;
  if ( initializing )
  {
    *(_DWORD *)(a1 + 720) = peer_associations + v21;
  }
  else if ( *(_BYTE *)(a1 + 63) == 2 )
  {
    *(_DWORD *)(a1 + 720) = ntp_minpkt + v21;
  }
  else
  {
    v22 = sub_69A2C(result, v16);
    result = sub_8D0EC(v22, *(unsigned __int8 *)(a1 + 65));
    v21 = current_time;
    *(_DWORD *)(a1 + 720) += v23;
  }
  *(_DWORD *)(a1 + 236) = v21 + 0x80000;
  return result;
}
