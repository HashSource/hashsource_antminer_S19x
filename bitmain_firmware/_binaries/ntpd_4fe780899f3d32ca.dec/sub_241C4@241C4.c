int sub_241C4()
{
  ctltimereset = current_time;
  numctlreq = 0;
  numctlbadpkts = 0;
  numctlresponses = 0;
  numctlfrags = 0;
  numctlerrors = 0;
  numctltooshort = 0;
  numctlinputresp = 0;
  numctlinputfrag = 0;
  numctlinputerr = 0;
  numctlbadoffset = 0;
  numctlbadversion = 0;
  numctldatatooshort = 0;
  numctlbadop = 0;
  numasyncmsgs = 0;
  return _stack_chk_guard;
}
