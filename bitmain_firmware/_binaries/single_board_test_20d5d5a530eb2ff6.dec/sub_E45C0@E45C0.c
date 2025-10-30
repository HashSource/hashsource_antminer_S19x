char *__fastcall sub_E45C0(
        char *result,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        void (__fastcall *a8)(int, int, int))
{
  char *v9; // r6
  int v10; // r7
  char *v11; // r8
  char v12; // t1
  char v13; // t1
  _BYTE v14[17]; // [sp+4h] [bp+0h]
  _BYTE v15[17]; // [sp+4h] [bp+0h]

  if ( a3 )
  {
    v9 = result;
    v10 = a2 - 1;
    v11 = &result[a3];
    if ( a7 )
    {
      do
      {
        *(_DWORD *)v15 = *(_DWORD *)a5;
        *(_QWORD *)&v15[4] = *(_QWORD *)(a5 + 4);
        *(_DWORD *)&v15[12] = *(_DWORD *)(a5 + 12);
        a8(a5, a5, a4);
        v13 = *v9++;
        v15[16] = *(_BYTE *)a5 ^ v13;
        result = *(char **)&v15[5];
        *(_BYTE *)++v10 = v15[16];
        *(_DWORD *)a5 = *(_DWORD *)&v15[1];
        *(_QWORD *)(a5 + 4) = *(_QWORD *)&v15[5];
        *(_DWORD *)(a5 + 12) = *(_DWORD *)&v15[13];
      }
      while ( v11 != v9 );
    }
    else
    {
      do
      {
        *(_QWORD *)v14 = *(_QWORD *)a5;
        *(_QWORD *)&v14[8] = *(_QWORD *)(a5 + 8);
        a8(a5, a5, a4);
        v12 = *v9++;
        v14[16] = v12;
        result = *(char **)&v14[1];
        *(_BYTE *)++v10 = *(_BYTE *)a5 ^ v12;
        *(_QWORD *)a5 = *(_QWORD *)&v14[1];
        *(_DWORD *)(a5 + 8) = *(_DWORD *)&v14[9];
        *(_DWORD *)(a5 + 12) = *(_DWORD *)&v14[13];
      }
      while ( v9 != v11 );
    }
  }
  return result;
}
