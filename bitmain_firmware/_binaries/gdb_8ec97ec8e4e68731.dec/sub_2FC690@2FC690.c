int __fastcall sub_2FC690(int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v5; // r12
  unsigned int v8; // r1
  int result; // r0
  bool v10; // zf
  int v11; // r1

  v5 = *a3;
  v8 = *a2;
  result = *a1;
  if ( v8 < *a3 )
  {
LABEL_9:
    *(_DWORD *)(result + 4 * v8) = a4;
    if ( a4 )
      *a2 = v8 + 1;
    return 1;
  }
  v10 = v5 == 0;
  if ( v5 )
  {
    v11 = 8 * v5;
    v5 *= 2;
  }
  else
  {
    v11 = 496;
    *a3 = 124;
  }
  if ( !v10 )
    *a3 = v5;
  result = (int)sub_2AB3FC((void *)result, v11);
  if ( result )
  {
    v8 = *a2;
    *a1 = result;
    goto LABEL_9;
  }
  return result;
}
