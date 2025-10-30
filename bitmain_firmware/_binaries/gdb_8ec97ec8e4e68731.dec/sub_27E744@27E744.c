void sub_27E744()
{
  int v0; // r0
  int v1; // r6
  int v2; // r5
  int v3; // r5

  if ( dword_48AA74 )
  {
    if ( !sub_98F78(&dword_4878EC, &dword_475848) )
    {
      v0 = sub_183688();
      v1 = sub_27E298(v0);
      sub_259F10("Inferior's terminal status (currently saved by GDB):\n");
      v2 = *(_DWORD *)(v1 + 12);
      sub_259F10("File descriptor flags = ");
      switch ( v2 & 3 )
      {
        case 1:
          sub_259F10("O_WRONLY");
          break;
        case 2:
          sub_259F10("O_RDWR");
          break;
        case 0:
          sub_259F10("O_RDONLY");
          break;
      }
      if ( (v2 & 0x800) != 0 )
        sub_259F10(" | O_NONBLOCK");
      if ( (v2 & 0x400) != 0 )
        sub_259F10(" | O_APPEND");
      if ( (v2 & 0xFFFFF3FC) != 0 )
        sub_259F10(" | 0x%x", v2 & 0xFFFFF3FC);
      sub_259F10((char *)&word_356638);
      sub_259F10("Process group = %d\n", *(_DWORD *)(v1 + 8));
      v3 = dword_48AA78;
      sub_242F8C();
      sub_1FE0EC(v3);
    }
  }
  else
  {
    sub_259F10("This GDB does not control a terminal.\n");
  }
}
