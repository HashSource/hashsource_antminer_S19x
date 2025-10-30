void __noreturn sub_33A7B8()
{
  int v0; // r0
  __int64 v1; // kr00_8

  v0 = sub_339E4C();
  v1 = *(_QWORD *)v0;
  ++*(_DWORD *)(v0 + 4);
  if ( (_DWORD)v1 )
  {
    if ( *(_BYTE *)(v1 + 32) == 71
      && *(_BYTE *)(v1 + 33) == 78
      && *(_BYTE *)(v1 + 34) == 85
      && *(_BYTE *)(v1 + 35) == 67
      && *(_BYTE *)(v1 + 36) == 67
      && *(_BYTE *)(v1 + 37) == 43
      && *(_BYTE *)(v1 + 38) == 43
      && *(unsigned __int8 *)(v1 + 39) <= 1u )
    {
      *(_DWORD *)(v1 + 20) = -*(_DWORD *)(v1 + 20);
    }
    else
    {
      *(_DWORD *)v0 = 0;
    }
    sub_348DAC(v1 + 32);
    sub_339E78(v1 + 32);
  }
  sub_339780();
}
