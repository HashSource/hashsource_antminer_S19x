int sub_64594()
{
  _DWORD v2[8]; // [sp+Ch] [bp-838h] BYREF
  char v3[2048]; // [sp+2Ch] [bp-818h] BYREF
  int v4; // [sp+82Ch] [bp-18h]
  int v5; // [sp+830h] [bp-14h] BYREF
  __int16 v6; // [sp+834h] [bp-10h]
  __int16 v8; // [sp+83Eh] [bp-6h]

  if ( !sub_62FF4() )
    return -1;
  v5 = 201632341;
  v6 = 3076;
  memset(v2, 0, sizeof(v2));
  v8 = 0;
  if ( sub_62DA0(dword_531538, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)v2, 0xAu) )
  {
    strcpy(v3, "Get power reset root cause failed\n");
    sub_3AF5C(3, v3, 0, (int)v3);
    return -1;
  }
  else
  {
    v4 = v2[1];
    return v2[1];
  }
}
