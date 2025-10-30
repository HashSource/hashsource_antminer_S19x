int __fastcall sub_3256DC(int a1, char a2, int a3)
{
  _BYTE *v6; // r0
  void *v7; // r7
  char *v8; // r1
  int v9; // r0
  int v10; // r5

  if ( *(_DWORD *)(a1 + 28) || *(int *)(a1 + 12) > 0 || *(_DWORD *)(a1 + 16) )
  {
    *_errno_location() = 22;
    return 0;
  }
  else
  {
    v6 = sub_325018((const char **)(a1 + 8), a2, a3, 0);
    v7 = v6;
    if ( !v6 )
      return 0;
    v8 = "wb";
    if ( (a2 & 0x20) == 0 )
      v8 = "w";
    v9 = fopen64(v6, v8);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)(a1 + 48) = v9;
      *(_DWORD *)(a1 + 16) = v7;
      *(_DWORD *)(a1 + 20) = a3 != (_DWORD)v7;
    }
    else
    {
      free(v7);
    }
    return v10;
  }
}
