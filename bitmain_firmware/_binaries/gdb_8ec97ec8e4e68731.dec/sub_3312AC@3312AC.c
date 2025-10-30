int __fastcall sub_3312AC(int result, int a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r12
  int v5; // r0

  v2 = result;
  *(_DWORD *)result = 9;
  *(_DWORD *)(result + 4) = 999999999;
  *(_DWORD *)(result + 8) = -999999999;
  *(_DWORD *)(result + 12) = 2;
  *(_DWORD *)(result + 16) = 8927;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = 0;
  if ( a2 == 32 )
  {
    *(_DWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 4) = 0xFFFFFFA100000060LL;
    *(_DWORD *)result = 7;
    *(_DWORD *)(result + 12) = 3;
    *(_BYTE *)(result + 24) = 1;
  }
  else
  {
    if ( a2 <= 32 )
    {
      if ( !a2 )
        return v2;
    }
    else
    {
      if ( a2 == 64 )
      {
        v3 = -383;
        v4 = 16;
        v5 = 384;
        goto LABEL_6;
      }
      if ( a2 == 128 )
      {
        v3 = -6143;
        v4 = 34;
        v5 = 6144;
LABEL_6:
        *(_DWORD *)(v2 + 16) = 0;
        *(_DWORD *)(v2 + 8) = v3;
        *(_DWORD *)v2 = v4;
        *(_DWORD *)(v2 + 4) = v5;
        *(_DWORD *)(v2 + 12) = 3;
        *(_BYTE *)(v2 + 24) = 1;
        return v2;
      }
    }
    *(_DWORD *)(result + 20) = 128;
    raise(8);
    return v2;
  }
  return result;
}
