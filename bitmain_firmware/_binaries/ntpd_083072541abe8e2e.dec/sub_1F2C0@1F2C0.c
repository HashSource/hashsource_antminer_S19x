char *__fastcall sub_1F2C0(const char *a1, int a2, int a3)
{
  size_t v5; // r0
  int v6; // r2
  _DWORD v8[2]; // [sp+4h] [bp-24h] BYREF
  const char *v9; // [sp+Ch] [bp-1Ch]
  int v10; // [sp+10h] [bp-18h]
  int v11; // [sp+14h] [bp-14h]
  int v12; // [sp+18h] [bp-10h]
  char *v13; // [sp+1Ch] [bp-Ch]
  int v14; // [sp+20h] [bp-8h]

  v8[0] = a1;
  v5 = strlen(a1);
  v6 = a3;
  v8[1] = v5;
  if ( a3 )
    v6 = 1;
  if ( !a2 )
    v6 = 0;
  if ( v6 )
  {
    v11 = a2;
    v9 = "=\"";
    v12 = a3;
    v13 = "\"";
    v10 = 2;
    v14 = 1;
    return sub_1EEC8((char *)v8, 4, 0);
  }
  else
  {
    v10 = 3;
    v9 = "=\"\"";
    return sub_1EEC8((char *)v8, 2, 0);
  }
}
