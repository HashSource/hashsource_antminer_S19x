int __fastcall sub_231978(int result)
{
  int v1; // r4
  int v2; // r0
  const char *v3; // r4
  int v4; // r0
  const char *v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // [sp+0h] [bp-28h] BYREF
  int v9; // [sp+4h] [bp-24h]
  int v10; // [sp+8h] [bp-20h]
  int v11; // [sp+Ch] [bp-1Ch]
  int v12; // [sp+10h] [bp-18h]
  int v13; // [sp+14h] [bp-14h]
  int v14; // [sp+1Ch] [bp-Ch]

  if ( result )
  {
    v14 = v1;
    v2 = sub_FA624(0);
    if ( v2 )
      v3 = (const char *)v2;
    else
      v3 = "";
    v4 = ps_getpid_0((int)&dword_4878EC);
    sub_98F50(&v8, v4);
    v11 = v8;
    v12 = v9;
    v13 = v10;
    v5 = (const char *)off_489AAC(&dword_4899A0, v8, v9, v10);
    v6 = sub_259858("Detaching from program: %s, %s\n", v3, v5);
    v7 = (_DWORD *)sub_242F8C(v6);
    return sub_25680C(*v7);
  }
  return result;
}
