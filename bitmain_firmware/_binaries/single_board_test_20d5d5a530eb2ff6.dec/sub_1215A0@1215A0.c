int __fastcall sub_1215A0(int a1, _DWORD *a2, int a3)
{
  signed int v4; // r4
  int v5; // r6
  int v6; // r3
  char *v8; // r1
  int v9; // [sp+4h] [bp-4h] BYREF

  v4 = 0;
  v9 = a3;
  while ( v4 < sub_10C010((int)a2) )
  {
    v5 = sub_10C01C(a2, v4);
    v6 = sub_126F04(v5);
    if ( v6 == 5 )
    {
      v8 = "status_request";
    }
    else
    {
      if ( v6 != 17 )
      {
        sub_1225A4(0, v5, &v9);
        goto LABEL_5;
      }
      v8 = "status_request_v2";
    }
    sub_121F9C(0, v8);
LABEL_5:
    ++v4;
  }
  return v9;
}
