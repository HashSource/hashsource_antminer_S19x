void *__fastcall sub_43804(int a1, int a2, int a3, _DWORD *a4)
{
  __pid_t v6; // r0
  int v7; // r0
  size_t v8; // r4
  void *v9; // r5
  int *v11; // r0
  _BYTE v12[4096]; // [sp+0h] [bp-1000h] BYREF

  if ( !a2 || *(_BYTE *)(a2 + 16) || (v6 = *(_DWORD *)(a2 + 12)) == 0 )
    v6 = getpid();
  v7 = ((int (__fastcall *)(__pid_t, int, _BYTE *, int))loc_4D498)(v6, a3, v12, 4096);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = _errno_location();
    v9 = 0;
    *a4 = sub_96090(*v11);
  }
  else
  {
    v9 = (void *)sub_93028(v7 + 1);
    memcpy(v9, v12, v8);
    *((_BYTE *)v9 + v8) = 0;
  }
  return v9;
}
