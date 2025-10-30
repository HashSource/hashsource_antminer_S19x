char *__fastcall sub_FADCC(int a1, int a2, int a3, int a4)
{
  int v4; // r1
  int v5; // r0
  int v7; // [sp+4h] [bp-20h] BYREF
  int v8; // [sp+8h] [bp-1Ch]
  int v9; // [sp+Ch] [bp-18h]
  _DWORD v10[4]; // [sp+14h] [bp-10h] BYREF

  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( dword_47ACBC && ((int (*)(void))loc_16B6FC)() )
    return (char *)((int (__fastcall *)(int, int, int, int))loc_16B748)(dword_47ACBC, v7, v8, v9);
  v4 = sub_98F68((int)&v7);
  if ( v4 )
  {
    sub_98F50(v10, v4);
    return (char *)sub_231A94(v10[0], v10[1], v10[2]);
  }
  else
  {
    v5 = sub_183A88(v7, v8, v9);
    if ( v5 && !*(_BYTE *)(v5 + 16) )
    {
      return (char *)sub_231A94(v7, v8, v9);
    }
    else
    {
      sub_93170(byte_47ACC0, 0x40u, "<main task>");
      return byte_47ACC0;
    }
  }
}
