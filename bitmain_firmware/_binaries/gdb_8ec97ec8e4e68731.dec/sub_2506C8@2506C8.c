int __fastcall sub_2506C8(int result, int *a2, int (__fastcall *a3)(int *, int *))
{
  int *v3; // r10
  int *v6; // r4
  int v7; // r7
  int *v8; // r9
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r12
  _DWORD *v13; // r10
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // [sp+4h] [bp-2Ch]
  int v18; // [sp+8h] [bp-28h]
  int v19; // [sp+Ch] [bp-24h]

  if ( (int *)result != a2 )
  {
    v3 = (int *)(result + 12);
    if ( (int *)(result + 12) != a2 )
    {
      v6 = (int *)result;
      v7 = -12 - result;
      do
      {
        v8 = v3 + 3;
        if ( a3(v3, v6) )
        {
          v9 = *v3;
          v10 = v3[1];
          v11 = v3[2];
          v12 = -1431655765 * (((int)v8 + v7) >> 2);
          v13 = v3 + 3;
          v17 = v9;
          v18 = v10;
          v19 = v11;
          if ( (int)v8 + v7 > 0 )
          {
            do
            {
              --v12;
              v14 = *(v13 - 6);
              v15 = *(v13 - 5);
              v16 = *(v13 - 4);
              v13 -= 3;
              *v13 = v14;
              v13[1] = v15;
              v13[2] = v16;
            }
            while ( v12 );
          }
          result = v17;
          *v6 = v17;
          v6[1] = v18;
          v6[2] = v19;
        }
        else
        {
          result = sub_25066C(v3, a3);
        }
        v3 = v8;
      }
      while ( v8 != a2 );
    }
  }
  return result;
}
