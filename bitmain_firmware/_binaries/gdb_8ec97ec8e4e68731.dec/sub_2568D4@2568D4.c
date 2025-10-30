FILE *__fastcall sub_2568D4(int a1, int a2, char *a3)
{
  FILE *result; // r0
  int v5; // r0
  FILE *v6; // r3
  int v7; // [sp+0h] [bp-14h]
  char *v8; // [sp+4h] [bp-10h]
  FILE *stream; // [sp+Ch] [bp-8h] BYREF

  if ( *(_BYTE *)(a1 + 12) )
  {
    v7 = a2;
    v8 = a3;
    fclose(*(FILE **)(a1 + 4));
    a2 = v7;
    a3 = v8;
    *(_BYTE *)(a1 + 12) = 0;
  }
  sub_967F0(&stream, a2, a3);
  result = stream;
  if ( stream )
  {
    *(_DWORD *)(a1 + 4) = stream;
    stream = 0;
    v5 = fileno(result);
    v6 = stream;
    *(_DWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 12) = 1;
    if ( v6 )
      fclose(v6);
    return (FILE *)1;
  }
  return result;
}
