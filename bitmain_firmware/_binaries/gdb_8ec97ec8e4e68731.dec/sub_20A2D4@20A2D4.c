void *__fastcall sub_20A2D4(int a1, int a2, int a3, int a4)
{
  void *result; // r0
  int v9; // r6
  int v10; // r3
  int v11; // r1
  _DWORD *v12; // r3
  int v13; // r10
  int v14; // [sp+4h] [bp-8h]

  result = (void *)dword_489448;
  v9 = dword_489450;
  if ( dword_489448 )
  {
    v11 = dword_48944C;
    v10 = 100 * dword_48944C;
    if ( dword_489448 <= a1 )
    {
      result = (void *)(a1 + 1);
      dword_489448 = a1 + 1;
    }
  }
  else
  {
    dword_48944C = 0;
    if ( a1 < 0 )
      goto LABEL_6;
    v10 = 0;
    v11 = 0;
    result = (void *)(a1 + 1);
    dword_489448 = a1 + 1;
  }
  if ( (int)result > v10 )
  {
    v13 = ((int)result - 100 * v11) / 100 + 1;
    dword_489450 = (int)sub_93050((void *)dword_489450, 1200 * (v13 + v11));
    v9 = dword_489450;
    v14 = dword_48944C;
    result = memset((void *)(dword_489450 + 1200 * dword_48944C), 0, 1200 * v13);
    dword_48944C = v14 + v13;
  }
LABEL_6:
  v12 = (_DWORD *)(v9 + 12 * a1);
  *v12 = a3;
  v12[2] = a2;
  v12[1] = a4;
  return result;
}
