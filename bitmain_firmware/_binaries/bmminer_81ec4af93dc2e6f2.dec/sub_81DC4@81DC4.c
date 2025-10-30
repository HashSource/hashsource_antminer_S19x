int __fastcall sub_81DC4(_DWORD *a1, int a2, int a3, int a4)
{
  a1[8] = a2;
  a1[9] = a3;
  a1[271] = a4;
  if ( sub_819D4((int)a1) )
  {
    sub_89984(2, "src/rotater.c", 437, "zlog_rotater_parse_archive_path fail", a4, a3, a2);
LABEL_12:
    sub_81D10(a1);
    return -1;
  }
  if ( sub_810A4((int)a1) )
  {
    sub_89984(2, "src/rotater.c", 443, "zlog_rotater_add_archive_files fail", a4, a3, a2);
    goto LABEL_12;
  }
  if ( a1[270] == 1 )
  {
    if ( sub_815D0((int)a1) )
    {
      sub_89984(2, "src/rotater.c", 450, "zlog_rotater_roll_files fail", a4, a3, a2);
      goto LABEL_12;
    }
  }
  else if ( a1[270] == 2 && sub_81274((int)a1) )
  {
    sub_89984(2, "src/rotater.c", 456, "zlog_rotater_seq_files fail", a4, a3, a2);
    goto LABEL_12;
  }
  sub_81D10(a1);
  return 0;
}
