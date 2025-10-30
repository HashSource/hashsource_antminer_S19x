char *__fastcall sub_1F528(const char *a1, int a2, int a3)
{
  size_t v5; // r0
  bool v6; // zf
  int v7; // r2
  _DWORD v9[2]; // [sp+4h] [bp-24h] BYREF
  const char *v10; // [sp+Ch] [bp-1Ch]
  int v11; // [sp+10h] [bp-18h]
  int v12; // [sp+14h] [bp-14h]
  int v13; // [sp+18h] [bp-10h]
  char *v14; // [sp+1Ch] [bp-Ch]
  int v15; // [sp+20h] [bp-8h]

  v9[0] = a1;
  v5 = strlen(a1);
  v6 = a2 == 0;
  if ( a2 )
    v6 = a3 == 0;
  v7 = !v6;
  v9[1] = v5;
  if ( v6 )
  {
    v11 = 3;
    v10 = "=\"\"";
    return sub_1F104((char *)v9, 2, v7);
  }
  else
  {
    v10 = "=\"";
    v12 = a2;
    v13 = a3;
    v14 = "\"";
    v11 = 2;
    v15 = 1;
    return sub_1F104((char *)v9, 4, 0);
  }
}
