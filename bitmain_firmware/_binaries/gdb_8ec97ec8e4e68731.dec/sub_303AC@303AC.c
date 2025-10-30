void sub_303AC()
{
  int v0; // r0
  int v1; // r5
  int v2; // r0
  int v3; // r2
  int v4; // r0
  void *v5; // r0
  int v6; // [sp+0h] [bp-1Ch] BYREF
  int v7; // [sp+4h] [bp-18h] BYREF
  int v8; // [sp+8h] [bp-14h] BYREF

  if ( sub_2FDC0(1879048214, *(_DWORD *)(dword_487D2C + 8), &v6, 0) || sub_30290(1879048214, &v6, 0) )
  {
    v0 = sub_16F654();
    v1 = *(_DWORD *)(sub_1780B4(v0) + 152);
    v2 = v6;
    v3 = *(_DWORD *)(v1 + 20);
    goto LABEL_4;
  }
  if ( sub_2FDC0(1879048245, *(_DWORD *)(dword_487D2C + 8), &v6, &v7) || sub_30290(1879048245, &v6, &v7) )
  {
    v4 = sub_16F654();
    v1 = *(_DWORD *)(sub_1780B4(v4) + 152);
    v3 = *(_DWORD *)(v1 + 20);
    v2 = v6 + v7;
LABEL_4:
    if ( !sub_230020(v2, &v6, v3) )
      sub_15AEA8(&v6, v1);
    return;
  }
  if ( !sub_2FDC0(21, *(_DWORD *)(dword_487D2C + 8), &v6, 0) && !sub_30290(21, &v6, 0) )
  {
    sub_1B141C((int)&v8, "_r_debug");
    if ( v8 )
    {
      if ( *(__int16 *)(v8 + 22) == -1 )
      {
        v5 = (void *)sub_94700("solib-svr4.c", 831, "Section index is uninitialized");
        if ( v5 )
          free(v5);
      }
    }
  }
}
