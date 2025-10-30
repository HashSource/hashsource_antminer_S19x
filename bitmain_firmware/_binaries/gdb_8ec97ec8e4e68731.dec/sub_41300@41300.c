char *__fastcall sub_41300(int a1, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r0
  int v7; // r6
  int v8; // r5
  int v9; // r7
  int v10; // r0
  int v11; // [sp+4h] [bp-10h] BYREF
  int v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  v11 = a2;
  v12 = a3;
  v13 = a4;
  if ( !sub_9902C(&v11) )
    return (char *)sub_231A94(v11, v12, v13);
  v4 = ps_getpid_0(&v11);
  if ( v4 == sub_98F68(&v11) )
  {
    v7 = ps_getpid_0(&v11);
    v8 = dword_472178;
    if ( !dword_472178 )
      return (char *)sub_231A94(v11, v12, v13);
    v9 = 0;
    do
    {
      v10 = ps_getpid_0(v8);
      v8 = *(_DWORD *)(v8 + 92);
      if ( v7 == v10 )
        ++v9;
    }
    while ( v8 );
    if ( v9 <= 1 )
      return (char *)sub_231A94(v11, v12, v13);
  }
  v5 = sub_98F68(&v11);
  snprintf(byte_472138, 0x40u, "LWP %ld", v5);
  return byte_472138;
}
