int __fastcall sub_280BCC(int a1, int a2)
{
  int v2; // r8
  int v3; // r6
  int v5; // r4
  int v6; // r6
  int v8; // r0

  v2 = a1;
  v3 = dword_48ABA8;
  if ( a1 > 0 )
  {
    if ( dword_48ABA8 )
    {
      v5 = 0;
      do
      {
        v6 = dword_4900D8;
        ++v5;
        a1 = sub_2924E0(a1);
        if ( a1 )
          --dword_48ABA8;
        if ( dword_4900D8 == v6 )
        {
          a1 = sub_29534C(1, a2);
          v3 = dword_48ABA8;
          if ( v2 == v5 )
            goto LABEL_10;
        }
        else
        {
          v3 = dword_48ABA8;
          if ( v2 == v5 )
            goto LABEL_10;
        }
      }
      while ( v3 );
    }
    a1 = sub_2945C8();
    v3 = dword_48ABA8;
  }
LABEL_10:
  if ( v3 || !dword_48AB9C )
    return 0;
  v8 = sub_292748(a1);
  sub_2924E0(v8);
  dword_48AB9C = 0;
  return 0;
}
