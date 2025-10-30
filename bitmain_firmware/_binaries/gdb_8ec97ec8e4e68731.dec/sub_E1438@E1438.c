void __fastcall sub_E1438(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  const char *v4; // r6
  const char *v5; // r0

  v2 = a1[63];
  if ( v2 )
  {
    if ( dword_487D4C )
    {
      v3 = *(_DWORD *)sub_242FC8(v2);
      v4 = (const char *)sub_240128(a1);
      v5 = (const char *)sub_23095C(a1[2], a1[3], a1[4]);
      sub_2594B0(v3, "[btrace] disable thread %s (%s)\n", v4, v5);
    }
    sub_2325C0();
    a1[63] = 0;
    sub_E1378((int)a1);
  }
}
