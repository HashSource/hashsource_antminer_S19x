int sub_ECEF0()
{
  int v0; // r0
  int v1; // r2
  int result; // r0
  int v3; // r3
  int v4; // r1
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // [sp+4h] [bp-8h] BYREF

  v8 = sub_270624();
  sub_ECBD8(0, &v8, 0, 0);
  v0 = sub_171598(v8);
  v1 = *(_DWORD *)(v8 + 24);
  switch ( *(_BYTE *)v1 )
  {
    case 1:
      v5 = **(char **)(v0 + 24);
      v6 = v5 == 10;
      if ( v5 != 10 )
        v6 = v5 == 7;
      v7 = v6;
      result = v7 ^ 1;
      break;
    case 2:
      v3 = *(_DWORD *)(v8 + 20);
      if ( !v3 )
        goto LABEL_15;
      v4 = *(_DWORD *)(v0 + 20);
      if ( v4 )
      {
        result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 24) + 12) + 24) + 24) + 16);
        if ( result )
          result = sub_347418(v3, v4);
      }
      else
      {
        result = 0;
      }
      break;
    case 3:
    case 4:
      result = *(__int16 *)(v1 + 4);
      break;
    default:
LABEL_15:
      result = 0;
      break;
  }
  return result;
}
