int __fastcall sub_7FC64(int **a1, int a2)
{
  int *v4; // r4
  int v5; // r3
  int result; // r0
  int v7; // r2
  size_t v8; // r9

  v4 = *a1;
  if ( *a1 )
  {
    v5 = *v4;
    result = v4[1];
    if ( *v4 >= result )
    {
      v8 = 4 * result + 40;
      v4[1] = result + 8;
      result = (int)realloc(v4, v8);
      if ( !result )
      {
        fprintf(stderr, off_B9478, v8, v4);
        sub_7E2B8(1);
      }
      v5 = *(_DWORD *)result;
      v4 = (int *)result;
      *a1 = (int *)result;
    }
    v7 = v5 + 1;
    goto LABEL_4;
  }
  result = (int)sub_7FBE0(0x20u);
  v4 = (int *)result;
  if ( result )
  {
    v5 = 0;
    *(_DWORD *)(result + 4) = 6;
    v7 = 1;
    *(_DWORD *)result = 0;
    *a1 = (int *)result;
LABEL_4:
    *v4 = v7;
    v4[v5 + 2] = a2;
  }
  return result;
}
