int __fastcall sub_295BA8(int a1, int a2)
{
  int v2; // r10
  int v4; // r5
  int i; // r4
  int v7; // r1
  int v8; // r4

  v2 = dword_4900D8;
  if ( !dword_4900D8 )
  {
    sub_2945C8();
    return 1;
  }
  if ( a1 <= 0 )
  {
    v4 = 0;
    sub_2926F8();
  }
  else
  {
    v4 = 0;
    for ( i = 0; i != a1; ++i )
    {
      sub_29534C(1, a2);
      v4 += sub_28D254(*(unsigned __int8 *)(dword_48AAD4 + dword_4900D8), dword_4900D8);
    }
    sub_2926F8();
    if ( a1 > 1 )
    {
      v7 = dword_4900D8;
      goto LABEL_7;
    }
  }
  v7 = dword_4900D8;
  if ( !dword_48AB0C )
  {
    sub_294F5C(v2, dword_4900D8);
    goto LABEL_8;
  }
LABEL_7:
  sub_291D70(v2, v7);
LABEL_8:
  v8 = dword_4900D8;
  if ( dword_4900D8 < dword_4900DC )
  {
    if ( v4 > 0 )
      sub_294B58(v4, 0x20u);
    dword_4900D8 = v8;
  }
  sub_292748();
  return 0;
}
