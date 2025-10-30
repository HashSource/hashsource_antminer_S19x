int __fastcall sub_6D110(int a1, int a2, int a3)
{
  int v6; // r4
  _DWORD v8[2]; // [sp+0h] [bp-4Ch] BYREF
  _DWORD v9[2]; // [sp+8h] [bp-44h] BYREF
  char v10; // [sp+10h] [bp-3Ch]
  int v11; // [sp+18h] [bp-34h]
  int v12; // [sp+1Ch] [bp-30h]
  int v13; // [sp+20h] [bp-2Ch]
  int v14; // [sp+24h] [bp-28h]
  int v15; // [sp+2Ch] [bp-20h]
  _BYTE v16[12]; // [sp+30h] [bp-1Ch] BYREF
  int v17; // [sp+3Ch] [bp-10h]

  sub_747D0(a3, "<string>");
  if ( a1 )
  {
    v6 = 0;
    v8[0] = a1;
    v9[0] = sub_6BE90;
    v8[1] = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    v9[1] = v8;
    v13 = 1;
    if ( !sub_6D580(v16) )
    {
      v17 = -1;
      v6 = sub_6D034(v9, a2, a3);
      sub_6C054((int)v9);
    }
  }
  else
  {
    sub_6BF34(a3, 0, "wrong arguments");
    return 0;
  }
  return v6;
}
