int __fastcall sub_13604(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  _DWORD v10[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD v11[18]; // [sp+10h] [bp-48h] BYREF

  sub_14D80(a4, "<buffer>");
  if ( a1 )
  {
    v8 = 0;
    v10[0] = a1;
    v10[1] = a2;
    v10[2] = 0;
    if ( !sub_12994((int)v11, (int)sub_12878, a3, (int)v10) )
    {
      v8 = sub_13510(v11, a3, a4);
      sub_131C8(v11);
    }
  }
  else
  {
    v8 = 0;
    sub_128D8(a4, 0, 4, "wrong arguments");
  }
  return v8;
}
