int __fastcall sub_E5CE0(_DWORD *a1, int a2, int a3)
{
  int v3; // r4
  _DWORD *v4; // r0

  LOWORD(v3) = -30500;
  if ( *a1 == a2 && a3 + 1 == a1[1] )
  {
    HIWORD(v3) = 71;
    v4 = *(_DWORD **)(v3 + 36);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    HIWORD(v3) = 71;
    v4 = *(_DWORD **)(v3 + 0x24);
    *(_DWORD *)(v3 + 0x8C) = 1;
    if ( !v4 )
    {
LABEL_8:
      obstack_begin(&stru_478904, (int)v4, (int)v4, (void *(*)(int))sub_93028, sub_E47BC);
      v4 = sub_B7220((int)&stru_478904);
      *(_DWORD *)(v3 + 36) = v4;
    }
  }
  return sub_B71D8((int (__fastcall ***)(_DWORD))v4);
}
