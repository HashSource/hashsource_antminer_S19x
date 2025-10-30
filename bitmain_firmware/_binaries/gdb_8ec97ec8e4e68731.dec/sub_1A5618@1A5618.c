int *__fastcall sub_1A5618(int *result, int *a2, int *a3)
{
  int v3; // r4
  _DWORD *v4; // r7
  int v5; // r5
  int v6; // r12
  int **i; // lr
  int *v8; // r3

  v3 = dword_487D2C;
  if ( !dword_487D2C )
    goto LABEL_11;
  v4 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v4 )
  {
    v3 = 0;
LABEL_11:
    v5 = v3;
    v6 = v3;
    goto LABEL_9;
  }
  v3 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    for ( i = (int **)v4[5]; i; i = (int **)*i )
    {
      ++v5;
      v8 = i[3];
      for ( v3 += *i[8]; v8; ++v6 )
        v8 = (int *)*v8;
    }
    v4 = (_DWORD *)*v4;
  }
  while ( v4 );
LABEL_9:
  *result = v6;
  *a2 = v5;
  *a3 = v3;
  return result;
}
