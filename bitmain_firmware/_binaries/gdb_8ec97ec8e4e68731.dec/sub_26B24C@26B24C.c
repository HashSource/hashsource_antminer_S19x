int __fastcall sub_26B24C(int result, int a2, unsigned int *a3, int a4, int a5)
{
  unsigned int v5; // lr
  signed __int64 v6; // r8
  unsigned int *v7; // r6
  unsigned int v8; // r7
  signed __int64 v9; // r2
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r4
  __int64 v12; // [sp+8h] [bp-40h]
  __int64 v13; // [sp+10h] [bp-38h]
  int v15; // [sp+1Ch] [bp-2Ch]

  if ( a3 )
  {
    v5 = *a3;
    if ( *a3 )
    {
      v15 = result;
      v6 = a4;
      v7 = a3;
      v8 = 0;
      v12 = a4 + (__int64)a5;
      v13 = a2 - (__int64)a4;
      do
      {
        while ( 1 )
        {
          v9 = *((_QWORD *)v7 + 1);
          ++v8;
          result = v7[5];
          v7 += 4;
          v10 = v9;
          if ( v9 < v6 )
            v10 = v6;
          v11 = v9 + __PAIR64__(result, *v7);
          if ( v12 < (__int64)(v9 + __PAIR64__(result, *v7)) )
            v11 = v12;
          if ( v10 < v11 )
            break;
          if ( v8 >= v5 )
            return result;
        }
        result = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))loc_26ACE0)(
                   v15,
                   (v12 - (v9 + __PAIR64__(result, *v7))) >> 32,
                   v13 + v10,
                   (v13 + v10) >> 32,
                   v11 - v10,
                   v11 - v10);
        v5 = *a3;
      }
      while ( v8 < *a3 );
    }
  }
  return result;
}
