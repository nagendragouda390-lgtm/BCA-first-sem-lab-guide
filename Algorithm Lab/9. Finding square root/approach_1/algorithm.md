1. Start
2. Declare variable `m`,`g1`,`g2`.
3. Initialise `error = 0.0001`.
4. Read value for `m`.
5. `g2 = m / 2.0`.
6. do
`g1 = g2`

`g2 = (g1 + m/g1)/2.0`

7. Check whether `fabs(g1-g2)>error`.
8. if True repeat step 6 and 7.
9. Display value of `g2`.
10. Stop
