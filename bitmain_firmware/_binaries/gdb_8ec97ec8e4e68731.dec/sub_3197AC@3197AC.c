int __fastcall sub_3197AC(int result, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r5
  int v5; // r7
  int v6; // r3
  int v7; // r4
  int v8; // r7
  int v9; // r5
  int v10; // r1
  char v11; // r6
  char v12; // t1
  int (__fastcall *v13)(int, int, int); // r3
  int v14; // r2

  if ( *a3 != 49 )
    return sub_314740(result, a2, (int)a3);
  v3 = a3[2];
  v4 = *(_DWORD *)(v3 + 4);
  v5 = *(_DWORD *)(v3 + 8);
  if ( v5 )
  {
    v6 = *(_DWORD *)(result + 256);
    v7 = result;
    v8 = v4 + v5 - 1;
    v9 = v4 - 1;
    do
    {
      v10 = v6;
      result = v7;
      v12 = *(_BYTE *)++v9;
      v11 = v12;
      if ( v6 == 255 )
      {
        v13 = *(int (__fastcall **)(int, int, int))(v7 + 264);
        v14 = *(_DWORD *)(v7 + 268);
        *(_BYTE *)(v7 + 255) = 0;
        result = v13(v7, 255, v14);
        v6 = 1;
        v10 = 0;
        ++*(_DWORD *)(v7 + 296);
      }
      else
      {
        ++v6;
      }
      *(_DWORD *)(v7 + 256) = v6;
      *(_BYTE *)(v7 + v10) = v11;
      *(_BYTE *)(v7 + 260) = v11;
    }
    while ( v9 != v8 );
  }
  return result;
}
