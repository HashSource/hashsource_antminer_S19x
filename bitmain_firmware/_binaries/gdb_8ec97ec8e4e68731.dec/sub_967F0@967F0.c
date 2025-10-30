FILE **__fastcall sub_967F0(FILE **a1, int a2, char *s)
{
  size_t v6; // r5
  char *v7; // r0
  FILE *v8; // r5
  int v9; // r0
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  if ( dword_475520 )
  {
    v8 = (FILE *)fopen64(a2, s);
    if ( v8 )
      goto LABEL_3;
LABEL_7:
    *a1 = 0;
    return a1;
  }
  v6 = strlen(s);
  v7 = (char *)memcpy(savedregs, s, v6);
  *(_WORD *)&v7[v6] = 101;
  v8 = (FILE *)fopen64(a2, v7);
  if ( !v8 )
  {
    if ( *_errno_location() == 22 )
    {
      v8 = (FILE *)fopen64(a2, s);
      if ( v8 )
      {
        dword_475520 = 1;
        goto LABEL_3;
      }
    }
    goto LABEL_7;
  }
LABEL_3:
  v9 = fileno(v8);
  if ( dword_47551C <= 0 )
    sub_96444(v9);
  *a1 = v8;
  return a1;
}
