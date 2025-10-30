int __fastcall sub_5348C(char *a1, int a2, int a3, int a4, int a5, int a6, char a7, int **a8)
{
  int result; // r0
  int v10; // r2
  char v11; // r2

  result = sub_52DB8(a1, a2, a4, a8);
  *(_DWORD *)(result + 20) = a3;
  if ( a3 )
    v10 = 11328;
  else
    *(_DWORD *)(result + 16) = 0;
  if ( a3 )
    HIWORD(v10) = 5;
  *(_DWORD *)(result + 52) = a5;
  if ( a3 )
    *(_DWORD *)(result + 16) = v10;
  v11 = *(_BYTE *)(result + 12);
  *(_DWORD *)(result + 56) = a6;
  *(_BYTE *)(result + 12) = v11 & 0xDF | (32 * (a7 & 1)) | 0x40;
  return result;
}
