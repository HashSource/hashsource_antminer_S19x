int __fastcall sub_6B840(int result)
{
  int v1; // r3
  int v2; // r6
  int v3; // r0
  int v4; // r5
  int v5; // r4
  int v6; // r3

  v1 = *(_DWORD *)(result + 16);
  v2 = result + 12;
  if ( v1 != result + 12 )
  {
    do
    {
      v3 = *(_DWORD *)(v1 + 8);
      v4 = v1 - 4;
      v5 = *(_DWORD *)(v1 + 4);
      if ( v3 )
      {
        v6 = *(_DWORD *)(v3 + 4);
        if ( v6 != -1 )
        {
          *(_DWORD *)(v3 + 4) = v6 - 1;
          if ( v6 == 1 )
            sub_6E5DC(v3);
        }
      }
      result = sub_6D518(v4);
      v1 = v5;
    }
    while ( v5 != v2 );
  }
  return result;
}
