int __fastcall sub_CD1A4(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v8; // r0
  int result; // r0

  v8 = sub_D8D94();
  if ( !a2 )
    goto LABEL_4;
  if ( *a3 <= 0x71u )
  {
    sub_D0048(16, 277, 100, "crypto/ec/ecx_meth.c", 770);
    return 0;
  }
  result = sub_155474(
             a2,
             a4,
             a5,
             *(_DWORD *)(*(_DWORD *)(v8 + 8) + 24),
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8) + 24) + 60),
             0,
             0);
  if ( result )
  {
LABEL_4:
    result = 1;
    *a3 = 114;
  }
  return result;
}
