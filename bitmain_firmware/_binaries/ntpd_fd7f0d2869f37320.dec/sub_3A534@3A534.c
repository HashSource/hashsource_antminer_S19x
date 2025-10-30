int __fastcall sub_3A534(int result)
{
  int v1; // r4
  int v2; // r5
  int v3; // r3
  int v4; // r2
  int v5; // r1
  __int64 v6; // r8
  int v7; // r1

  v1 = result;
  v2 = *(_DWORD *)(result + 84);
  v3 = *(unsigned __int8 *)(v2 + 40);
  *(_BYTE *)(result + 91) = v3;
  if ( v3 != 3 )
  {
    v4 = *(unsigned __int8 *)(result + 298);
    ++*(_DWORD *)(result + 744);
    *(_DWORD *)(result + 732) = current_time;
    if ( !v4 )
    {
      sub_26294(132, result, 0);
      LOBYTE(v4) = *(_BYTE *)(v1 + 298);
      *(_DWORD *)(v1 + 736) = current_time;
    }
    *(_BYTE *)(v1 + 298) = v4 | 1;
    v5 = *(_DWORD *)(v2 + 228);
    v6 = *(_QWORD *)(v2 + 248);
    *(_DWORD *)(v1 + 116) = *(_DWORD *)(v2 + 224);
    *(_DWORD *)(v1 + 120) = v5;
    v7 = *(_DWORD *)(v2 + 236);
    *(_DWORD *)(v1 + 584) = *(_DWORD *)(v2 + 232);
    *(_DWORD *)(v1 + 588) = v7;
    *(_QWORD *)(v1 + 104) = v6;
    sub_6055C(v1 + 576);
    result = sub_39A28(v2);
    if ( result )
    {
      result = sub_35AF4(v1);
      if ( cal_enable )
      {
        if ( fabs(last_offset) < sys_mindisp && sys_peer && *(_BYTE *)(sys_peer + 88) == 22 && *(_BYTE *)(v1 + 88) != 22 )
          *(double *)(v2 + 744) = *(double *)(v2 + 744) - *(double *)(v2 + 240) * 0.1;
      }
    }
  }
  return result;
}
