int __fastcall sub_98F4C(_DWORD *a1)
{
  _DWORD *v1; // r3
  const void *v3; // r5
  size_t v4; // r4
  int v5; // r3
  int v6; // r2

  v1 = (_DWORD *)a1[31];
  v3 = (const void *)v1[148];
  v4 = v1[149];
  v5 = *(_DWORD *)(v1[132] + 16);
  if ( (v5 & 0x20) != 0 )
  {
    if ( !sub_A6AD4() )
      goto LABEL_5;
  }
  else
  {
    if ( !v3 && (v5 & 8) == 0 )
    {
      sub_95494(a1, 80, 354, 65, (int)"ssl/statem/statem_clnt.c", 3392);
      goto LABEL_5;
    }
    if ( !sub_82DD8(a1, v3, v4, 1) )
    {
      v4 = 0;
      v3 = 0;
LABEL_5:
      sub_E0758((int)v3, v4, (size_t)"ssl/statem/statem_clnt.c");
      v6 = a1[31];
      *(_DWORD *)(v6 + 592) = 0;
      *(_DWORD *)(v6 + 596) = 0;
      return 0;
    }
  }
  return 1;
}
