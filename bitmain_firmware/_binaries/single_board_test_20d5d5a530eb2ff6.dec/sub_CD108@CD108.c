int __fastcall sub_CD108(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v8; // r0
  int result; // r0

  v8 = sub_D8D94();
  if ( !a2 )
    goto LABEL_4;
  if ( *a3 <= 0x3Fu )
  {
    sub_D0048(16, 276, 100, "crypto/ec/ecx_meth.c", 749);
    return 0;
  }
  result = sub_148BC4(
             a2,
             a4,
             a5,
             *(_DWORD *)(*(_DWORD *)(v8 + 8) + 24),
             *(void **)(*(_DWORD *)(*(_DWORD *)(v8 + 8) + 24) + 60));
  if ( result )
  {
LABEL_4:
    result = 1;
    *a3 = 64;
  }
  return result;
}
