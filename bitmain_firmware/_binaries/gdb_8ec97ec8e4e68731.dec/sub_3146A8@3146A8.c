size_t __fastcall sub_3146A8(size_t a1, int a2)
{
  size_t result; // r0
  int v4; // r3
  char *v5; // r5
  char *v6; // r7
  int v7; // r1
  char v8; // r6
  char v9; // t1
  int (__fastcall *v10)(size_t, int, int); // r3
  int v11; // r2
  char s[28]; // [sp+4h] [bp-1Ch] BYREF

  sprintf(s, "%d", a2);
  result = strlen(s);
  if ( result )
  {
    v4 = *(_DWORD *)(a1 + 256);
    v5 = s;
    v6 = &s[result];
    do
    {
      v7 = v4;
      result = a1;
      v9 = *v5++;
      v8 = v9;
      if ( v4 == 255 )
      {
        v10 = *(int (__fastcall **)(size_t, int, int))(a1 + 264);
        v11 = *(_DWORD *)(a1 + 268);
        *(_BYTE *)(a1 + 255) = 0;
        result = v10(a1, 255, v11);
        v4 = 1;
        v7 = 0;
        ++*(_DWORD *)(a1 + 296);
      }
      else
      {
        ++v4;
      }
      *(_DWORD *)(a1 + 256) = v4;
      *(_BYTE *)(a1 + v7) = v8;
      *(_BYTE *)(a1 + 260) = v8;
    }
    while ( v6 != v5 );
  }
  return result;
}
