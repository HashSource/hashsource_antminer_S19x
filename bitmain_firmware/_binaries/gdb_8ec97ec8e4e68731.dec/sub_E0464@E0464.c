_DWORD *__fastcall sub_E0464(_DWORD *a1, int *a2)
{
  int v2; // r3
  _DWORD *v5; // r0
  int v6; // r2

  v2 = *a2;
  *a1 = 0;
  if ( v2 )
  {
    v5 = sub_9836C(0x10u);
    v6 = *a2;
    *a2 = 0;
    v5[3] = v6;
    *v5 = off_37D928;
    v5[1] = 1;
    v5[2] = 1;
    *a1 = v5;
  }
  return a1;
}
