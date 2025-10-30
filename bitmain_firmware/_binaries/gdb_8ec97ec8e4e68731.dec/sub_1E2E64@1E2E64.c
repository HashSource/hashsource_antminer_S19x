char *__fastcall sub_1E2E64(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // [sp+Ch] [bp-10h] BYREF
  int v10; // [sp+10h] [bp-Ch]
  int v11; // [sp+14h] [bp-8h]

  v9 = a2;
  v10 = a3;
  v11 = a4;
  v4 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v4);
  if ( !sub_98F78(&v9, &dword_475848) )
  {
    if ( sub_98FB8(&v9) )
    {
      if ( ((int (__fastcall *)(int))loc_1E2198)(72) != 1 )
      {
        sub_93170(byte_488CA4, 0x40u, "Remote target");
        return byte_488CA4;
      }
    }
    else
    {
      if ( sub_98F78(dword_488C70, &v9) )
      {
        sub_93170(byte_488CA4, 0x40u, "Thread <main>");
        return byte_488CA4;
      }
      if ( ((int (__fastcall *)(int))loc_1E2198)(72) != 1 )
      {
        v6 = sub_98F68((int)&v9);
        sub_93170(byte_488CA4, 0x40u, "Thread %ld", v6);
        return byte_488CA4;
      }
      if ( sub_98F68((int)&v9) )
      {
        v7 = ps_getpid_0((int)&v9);
        v8 = sub_98F68((int)&v9);
        sub_93170(byte_488CA4, 0x40u, "Thread %d.%ld", v7, v8);
        return byte_488CA4;
      }
    }
  }
  return (char *)sub_231A94(v9, v10, v11);
}
