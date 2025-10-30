bool __fastcall sub_2B1378(_BYTE *a1, _DWORD *a2, int *a3, unsigned int a4)
{
  int v4; // r6
  int v5; // r9
  _BYTE *v6; // r5
  _BYTE *v7; // r4
  int v8; // r12
  _BYTE *v9; // lr
  _BYTE *v10; // r7
  char v11; // r8

  v4 = (unsigned __int8)aCccccccccccccc[*(unsigned __int8 *)*a2];
  if ( v4 == 99 )
    return 0;
  v5 = *a2 + 1;
  if ( !aCccccccccccccc[*(unsigned __int8 *)*a2] )
    v4 = 16;
  v6 = (_BYTE *)(*a2 + 1);
  v7 = a1;
  v8 = 0;
  while ( 1 )
  {
    v9 = v6;
    v10 = v7;
    if ( (unsigned int)v6 >= a4 )
      break;
    v11 = *v6;
    ++v8;
    ++v6;
    *v7++ = v11;
    if ( v4 == v8 )
    {
      v10 = &a1[v4];
      v9 = (_BYTE *)(v5 + v4);
      break;
    }
  }
  *v10 = 0;
  *a2 = v9;
  *a3 = v4;
  return v8 == v4;
}
